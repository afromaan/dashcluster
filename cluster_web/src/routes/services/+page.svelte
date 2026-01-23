<script>
    import { onMount } from "svelte";
    let cta;
    let form;

    onMount(() => {
        const ctaObserver = new IntersectionObserver(
            (entries) => {
                entries.forEach((entry) => {
                    if (entry.isIntersecting) {
                        entry.target.classList.add("fadeIn");
                    }
                });
            },
            { threshold: 0.1 },
        );

        ctaObserver.observe(cta);
        ctaObserver.observe(form);
    });
</script>

<main>
    <div class="container vh-100 d-flex flex-column justify-content-center">
        <form action="">
            <div class="cta" bind:this={cta}>
                <h1>Contact Us</h1>
                <p>
                    We would love to hear from you! Please fill out the form
                    below and we'll get back to you as soon as possible.
                </p>
            </div>
            <div class="form" bind:this={form}>
                <input
                    type="text"
                    class="form-control"
                    placeholder="Your Name"
                    required
                />
                <input
                    type="email"
                    class="form-control"
                    placeholder="Your Email"
                    required
                />
                <textarea
                    class="form-control"
                    rows="5"
                    placeholder="Your Message"
                    required
                ></textarea>
                <button type="submit" class="btn btn-primary"
                    >Send Message</button
                >
            </div>
        </form>
    </div>
</main>

<style>
    .form-control{
        margin: 10px;
    }
    .container{
        width: 50%;
    }
    main{
        font-family: "Zalando Sans Expanded", sans-serif;
        background-color: #212529;
        color: white;
    }
    .cta{
        gap: 10px;
    }
    textarea, input{
        background-color: #212529;
    }

    .form-control::placeholder{
        color: white;
        background-color: #212529;
    }
    .form-control:focus{
        background-color: #212529;
        color: white;
    }
</style>
