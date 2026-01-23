<script>
    import { onMount } from "svelte";
    let loaded = false;

    onMount(() => {
        loaded = true;
    });
</script>

<main class="bg-dark" id="home">
    <div class="container">
        <div class="content">
            <div class="row">
                <section
                    class="vh-100 d-flex align-items-center bg-dark text-white col-6"
                >
                    <div class="text-start cta" class:fadeIn={loaded}>
                        <h1>welcome</h1>
                        <br />
                        <p>
                            We build fun, smart, and modern gaming experiences.
                        </p>
                    </div>
                </section>
                <section
                    class="vh-100 d-flex align-items-center justify-content-center bg-dark text-white col-6 form"
                    class:fadeIn={loaded}
                >
                    <input
                        type="email"
                        class="form-control p-3"
                        placeholder="Your email"
                    />
                    <input
                        type="text"
                        class="form-control p-3"
                        placeholder="Write your message here..."
                    />

                    <button type="button" class="btn btn-outline-danger p-3"
                        >send</button
                    >
                </section>
                <div class="d-flex justify-content-center nadpis">
                    <h1 id="projects">projects</h1>
                </div>
                <section
                    class=" d-flex align-items-center justify-content-center bg-dark text-white col-6"
                >
                    <div class="text-center card card-hover">
                        <h2>game</h2>
                        <p class="d-flex align-items-start">
                            Building the future of gaming
                        </p>
                        <img src="/" alt="" />
                        <a href="/"><button type="button" class="btn btn-dark p-3"
                            >more</button
                        ></a>
                    </div>
                </section>

                <section
                    class=" d-flex align-items-center justify-content-center bg-dark text-white col-6"
                >
                    <div class="text-center card card-hover">
                        <h2>develop</h2>
                        <p class="d-flex align-items-start">
                            Creating innovative solutions
                        </p>
                        <img src="/" alt="" />
                        <a href="/develop"><button type="button" class="btn btn-dark p-3"
                            >more</button
                        ></a>
                    </div>
                </section>
                <div class="d-flex justify-content-center nadpis">
                    <h1 id="about">about</h1>
                </div>
                <section
                    class="d-flex align-items-center justify-content-center bg-dark text-white col-12 profile-section"
                >
                    <div class="profile-card">
                        <img src="/" alt="pfp1" class="pfp" />
                        <h2>technic</h2>
                        <h4>Afroman</h4>
                        <p class="d-flex align-items-start">
                            Crafting visually stunning experiences
                        </p>
                    </div>

                    <div class="profile-card">
                        <img src="/" alt="pfp2" class="pfp" />
                        <h2>designer</h2>
                        <h4>domcajs</h4>
                        <p class="d-flex align-items-start">
                            Designing modern and fun interfaces
                        </p>
                    </div>
                </section>
            </div>
        </div>
    </div>
</main>

<style>
    .nadpis {
        color: white;
        text-transform: uppercase;
        margin-bottom: 25px;
    }
    .profile-section {
        display: flex;
        gap: 40px;
        justify-content: center;
        flex-wrap: wrap;
    }

    .profile-card {
        position: relative;
        background-color: #343a40;
        color: white;
        width: 300px;
        height: 350px;
        border-radius: 15px;
        padding: 20px;
        box-shadow: 0 6px 12px rgba(0, 0, 0, 0.3);
        display: flex;
        flex-direction: column;
        justify-content: flex-end;
        transition: transform 0.3s ease-in-out;
        margin-bottom: 100px;
    }

    .profile-card:hover {
        transform: scale(1.05);
    }

    .pfp {
        position: absolute;
        top: -30px;
        right: -30px;
        width: 80px;
        height: 80px;
        border-radius: 50%;
        border: 3px solid #212529;
        object-fit: cover;
        background-color: #6c757d;
    }

    .profile-card h2 {
        font-weight: bold;
        font-size: 24px;
        text-transform: uppercase;
        margin: 0;
    }

    .profile-card h4 {
        font-weight: 300;
        margin: 5px 0 10px 0;
        opacity: 0.8;
    }

    .profile-card p {
        font-weight: 100;
        opacity: 0.7;
        font-size: 16px;
    }

    .card-hover {
        transition: transform 0.3s ease-in-out;
    }
    .card-hover:hover {
        transform: scale(1.02);
    }
    .pfp {
        border-radius: 100%;
    }
    .card h2 {
        font-weight: bold;
        font-size: 32px;
        margin-bottom: 10px;
        text-transform: uppercase;
    }
    .card {
        color: white;
        background-color: #343a40;
        padding: 20px;
        border-radius: 3px;
        width: 100%;
        height: 300px;
        box-shadow: 0 4px 8px rgba(0, 0, 0, 0.2);
        display: flex;
        flex-direction: column;
        justify-content: space-between;
        margin-bottom: 20rem;
    }

    .bg-dark {
        background-color: #212529 !important;
    }
    main {
        font-family: "Zalando Sans Expanded", sans-serif;
    }
    .cta.fadeIn {
        opacity: 1;
        transform: scale(1);
    }
    .form.fadeIn {
        opacity: 1;
        transform: scale(1);
    }
    .form {
        gap: 20px;
        opacity: 0;
        transform: scale(0.9);
        flex-direction: column;
        transition:
            opacity 1.5s ease,
            transform 1.5s ease;
    }
    .form-control {
        width: 50%;
        caret-color: white;
        color: white;
    }
    .form-control:focus {
        background-color: #212529;
        color: white;
    }
    input {
        background-color: #212529;
    }
    input::placeholder {
        color: white;
        
    }
    .cta {
        opacity: 0;
        transform: scale(0.9);
        transition:
            opacity 1.5s ease,
            transform 1.5s ease;
        text-align: start;
    }
    .cta h1 {
        font-weight: bold;
        text-transform: uppercase;
    }
    .cta p {
        font-weight: 100;
        opacity: 0.7;
        font-size: 22px;
    }
    .btn {
        width: 150px;
        font-size: 18px;
        font-weight: bold;
    }
    .btn:hover {
        background-color: rgba(65, 72, 80, 0.609);
    }
</style>
