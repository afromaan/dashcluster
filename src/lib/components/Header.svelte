<script>
    import { onMount } from "svelte";
    let lastScroll = 0;
    let headerVisible = true;

    onMount(() => {
        const handleScroll = () => {
            const currentScroll = window.scrollY;
            if (currentScroll > lastScroll && currentScroll > 100) {
                headerVisible = false;
            } else {
                headerVisible = true;
            }
            lastScroll = currentScroll;
        };

        window.addEventListener("scroll", handleScroll);

        return () => window.removeEventListener("scroll", handleScroll);
    });
</script>
<header class:hide={!headerVisible}>
    <div class="container-fluid">
        <div class="row">
            <div class="col-4 py-3 d-flex justify-start align-items-center">
                <h2 class="text-white">ProtoByte</h2>
            </div>
            <div class="col-4"></div>
            <div class="col-4">
                <nav>
                    <ul class="navbar-nav p-3">
                        <li class="nav-item">
                            <a class="nav-link" href="#home">Home</a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link" href="#about">About</a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link" href="/services">Services</a>
                        </li>
                    </ul>
                </nav>
            </div>
        </div>
    </div>
</header>

<style>
    .navbar-nav {
        display: flex;
        flex-direction: row;
        gap: 10px;
        justify-content: end;
    }
    .navbar-nav .nav-link {
        color: white !important;
        display: inline-block;
        opacity: 1 !important;
        transition: opacity 0.3s ease !important;
    }

    .navbar-nav .nav-link:hover {
        opacity: 0.7 !important;
    }

    header {
        background-color: #212529;
        width: 100%;
        box-shadow: 0 4px 8px rgba(255, 255, 255, 0.1);
        position: fixed;
        top: 0; 
        left: 0;
        z-index: 1000; 
        transition: transform 0.4s ease-in-out;
    }

    h2 {
        font-family: "Zalando Sans Expanded", sans-serif;
        font-weight: bold;
        font-size: 28px;
    }
    header.hide {
    transform: translateY(-100%);
}
</style>
