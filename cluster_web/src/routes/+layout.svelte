<script>
	import Header from "$lib/components/Header.svelte";
	import Footer from "$lib/components/Footer.svelte";
	import "../app.css";
	import "mdb-ui-kit/css/mdb.min.css";
</script>

<Header />

<main>
	<slot />
</main>

<Footer />
