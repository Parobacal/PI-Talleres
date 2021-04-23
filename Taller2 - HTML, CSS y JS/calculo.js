function calcularVoltaje () {
    var resistencia = document.getElementById("resistencia").value;
    var corriente = document.getElementById("corriente").value;
    var voltaje = resistencia * corriente;
    document.getElementById("voltaje").value = voltaje;
}