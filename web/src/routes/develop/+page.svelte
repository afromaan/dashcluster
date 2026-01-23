<main>
    <div class="container">
        <div class="row align-items-stretch mb-4">
            <div class="col-6 d-flex flex-column justify-content-center align-items-center order-section">
                <h1>Develop in 14 days after ordering the product</h1>
                <form class="w-100 mt-3">
                    <div class="d-flex justify-content-center">
                        <input type="email" placeholder="Email" />
                        <button type="button" class="btn btn-dark">preorder</button>
                    </div>
                </form>
            </div>
            
            <div class="col-6">
                <div class="custom-card info h-100">
                    <h1>dash cluster</h1>
                    <p>
                        Dash Cluster is a cutting-edge solution designed to
                        streamline and enhance your data processing capabilities.
                        With its robust architecture and user-friendly interface,
                        Dash Cluster enables seamless integration and efficient
                        management of large-scale data operations.
                    </p>
                </div>
            </div>
        </div>

        <div class="row">
            <div class="col-6">
                <div class="custom-card h-100">
                    <h2>Software</h2>
                    <p>
                        Our software is built with the latest technologies to ensure
                        optimal performance and reliability. It is designed to be
                        user-friendly, allowing for easy navigation and operation.
                        With regular updates and dedicated support, we strive to
                        provide a seamless experience for our users.
                    </p>
                </div>
            </div>
        </div>
    </div>
</main>

<style>
    main {
        font-family: "Zalando Sans Expanded", sans-serif;
        background-color: #212529;
        color: white;
        min-height: 100vh;
        display: flex;
        align-items: center;
        padding: 40px 0;
    }

    .order-section h1 {
        font-size: 1.8rem;
        text-align: center;
    }

    .custom-card {
        background-color: #2c3035;
        padding: 30px;
        border-radius: 10px;
        box-shadow: 0 4px 12px rgba(0, 0, 0, 0.3);
        display: flex;
        flex-direction: column;
        justify-content: center;
        text-align: left; 
    }

    .custom-card h1, .custom-card h2 {
        margin-bottom: 15px;
        font-size: 1.5rem;
        text-transform: uppercase;
    }

    .custom-card p {
        margin-bottom: 0;
        line-height: 1.6;
        color: #e0e0e0;
    }

    input {
        padding: 12px;
        border: none;
        border-radius: 5px;
        margin-right: 10px;
        flex-grow: 1;
        max-width: 300px;
    }

    @media (max-width: 768px) {
        .col-6 {
            width: 100%;
            margin-bottom: 20px;
        }
    }
</style>