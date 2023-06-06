main_calcular_volumen_cono
#include <stdio.h>

#define PI 3.141592

int main() {
    float radio = 14.5;
    float altura = 26.79;
    float volumen;

    volumen = (1.0 / 3.0) * PI * radio * radio * altura;

    printf("El volumen del cono es: %.2f\n", volumen);

    return 0;
}
main_convertir_celsius
#include <stdio.h>

int main() {
    float f, celsius;

    printf("Ingrese la temperatura en grados Fahrenheit: ");
    scanf("%f", &f);

    celsius = (f-32) * 5 / 9;

    printf("La temperatura equivalente en grados Celsius es: %.2f\n", celsius);

    return 0;
}
#include <stdio.h>
main_convertir_tiempo
int main() {
    int segundos, horas, minutos, segundosRestantes;

    printf("Ingrese el tiempo transcurrido en segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundosRestantes = segundos % 3600;
    minutos = segundosRestantes / 60;
    segundosRestantes %= 60;

    printf("Tiempo equivalente: %dh %dm %ds\n", horas, minutos, segundosRestantes);

    return 0;
}
main_calcular_nota

#include <stdio.h>

int main() {
    float quiz, taller, trabajoFinal, exposicion, notaFinal;

    printf("Ingrese la calificación del Quiz: ");
    scanf("%f", &quiz);

    printf("Ingrese la calificación del Taller: ");
    scanf("%f", &taller);

    printf("Ingrese la calificación del Trabajo Final: ");
    scanf("%f", &trabajoFinal);

    printf("Ingrese la calificación de la Exposición: ");
    scanf("%f", &exposicion);

    notaFinal = (quiz + taller + trabajoFinal + exposicion) / 4;

    printf("La nota final obtenida es: %.2f\n", notaFinal);

    return 0;
}

main_calcular_expresión 

#include <stdio.h>

int main() {
    float r, a, b, c, d;

    // Solicitar al usuario que ingrese los valores de las variables
    printf("Ingrese el valor de r: ");
    scanf("%f", &r);

    printf("Ingrese el valor de a: ");
    scanf("%f", &a);

    printf("Ingrese el valor de b: ");
    scanf("%f", &b);

    printf("Ingrese el valor de c: ");
    scanf("%f", &c);

    printf("Ingrese el valor de d: ");
    scanf("%f", &d);

    // Calcular la expresión
    float resultado = ((4.0 / 3.0) * (r + 34)) - 9 * (a + b * c) + ((3 + d * (2 + a)) / (a + b * d));

    // Imprimir el resultado
    printf("El resultado es: %.2f\n", resultado);

    return 0;
}
main_valor_f

#include <stdio.h>
#include <math.h>

int main() {
    int x = 12;
    float sigma = 2.1836;
    int y = 3;
    float lambda = 1.11695;
    float alfa = 328.67;
    float f;

    f = 3 * (x + sigma * y / pow(x, 2) - pow(y, 2)) - lambda * (alfa - 13.7);

    printf("El valor de f es: %.2f\n", f);

    return 0;
}
main_sueldo
#include <stdio.h>

int main() {
    float sueldoBase, complementoDestino, complementoCargoAcademico, horasExtraRealizadas;
    int hijos, mayores;
    float sueldoBruto, irpf, retencionIRPF, sueldoNeto;

    // Solicitar al usuario los datos
    printf("Sueldo base: ");
    scanf("%f", &sueldoBase);

    printf("Complemento de destino: ");
    scanf("%f", &complementoDestino);

    printf("Complemento de cargo académico: ");
    scanf("%f", &complementoCargoAcademico);

    printf("Horas extra realizadas: ");
    scanf("%f", &horasExtraRealizadas);

    printf("Hijos: ");
    scanf("%d", &hijos);

    printf("Mayores: ");
    scanf("%d", &mayores);

    // Calcular sueldo bruto
    sueldoBruto = sueldoBase + complementoDestino + complementoCargoAcademico + (horasExtraRealizadas * 23);

    // Calcular porcentaje de IRPF
    irpf = 24 - (2 * hijos) - mayores;

    // Calcular retención por IRPF
    retencionIRPF = (sueldoBruto * irpf) / 100;

    // Calcular sueldo neto
    sueldoNeto = sueldoBruto - retencionIRPF;

    // Mostrar resultados
    printf("\nCalculo de la nómina:\n");
    printf("Sueldo bruto: %.2f\n", sueldoBruto);
    printf("Porcentaje de IRPF: %.2f%%\n", irpf);
    printf("Retención por IRPF: %.2f\n", retencionIRPF);
    printf("Sueldo neto: %.2f\n", sueldoNeto);

    return 0;
}
main_expresion_variables_definidas

#include <stdio.h>

int main() {
    int a = 1;
    double d = 1.0;

    // Expresión 1
    a = 46 % 9 + (4 * 4) - 2;
    printf("Resultado de la expresión 1: %d\n", a);

    // Expresión 2
    a = 45 + 43 % 5 * (23 * 3 % 2);
    printf("Resultado de la expresión 2: %d\n", a);

    // Expresión 3
    a = 45 + 45 * 50 % --a;
    printf("Resultado de la expresión 3: %d\n", a);

    // Expresión 4
    d = 1.5 * 3 + (++d);
    printf("Resultado de la expresión 4: %.2f\n", d);

    // Expresión 5
    d = 1.5 * 3 + d++;
    printf("Resultado de la expresión 5: %.2f\n", d);

    // Expresión 6
    a %= 3 / a + 3;
    printf("Resultado de la expresión 6: %d\n", a);

    return 0;
}

main_area_triangulo
#include <stdio.h>
#include <math.h>

int main() {
    float lado1, lado2, angulo, area;

    // Solicitar al usuario los valores de los lados y el ángulo
    printf("Ingrese el valor del lado 1: ");
    scanf("%f", &lado1);

    printf("Ingrese el valor del lado 2: ");
    scanf("%f", &lado2);

    printf("Ingrese el valor del ángulo (en radianes): ");
    scanf("%f", &angulo);

    // Calcular el área utilizando la fórmula
    area = (1.0 / 2.0) * lado1 * lado2 * sin(angulo);

    // Mostrar el resultado
    printf("El área del triángulo es: %.2f\n", area);

    return 0;
}
main_area_triangulo_2

#include <stdio.h>
#include <math.h>

int main() {
    float lado1, lado2, angulo, angulo_radianes, area;

    // Solicitar al usuario los valores de los lados y el ángulo
    printf("Ingrese el valor del lado 1: ");
    scanf("%f", &lado1);

    printf("Ingrese el valor del lado 2: ");
    scanf("%f", &lado2);

    printf("Ingrese el valor del ángulo (en grados): ");
    scanf("%f", &angulo);

    // Convertir el ángulo a radianes
    angulo_radianes = angulo * M_PI / 180.0;

    // Calcular el área utilizando la fórmula
    area = (1.0 / 2.0) * lado1 * lado2 * sin(angulo_radianes);

    // Mostrar el resultado
    printf("El área del triángulo es: %.2f\n", area);

    return 0;
}
main_
#include <stdio.h>

int main() {
    float capital, interesAnual, interesMensual, cuota, totalPagado, amortizacion, interes;
    int plazoMeses;

    // Solicitar al usuario los datos del préstamo
    printf("Ingrese el capital prestado: ");
    scanf("%f", &capital);

    printf("Ingrese el interés anual: ");
    scanf("%f", &interesAnual);

    printf("Ingrese el plazo en meses: ");
    scanf("%d", &plazoMeses);

    // Calcular el interés mensual (ratio)
    interesMensual = interesAnual / 12.0;

    // Calcular la cuota mensual utilizando la fórmula
    cuota = (capital * interesMensual) / (1 - pow(1 + interesMensual, -plazoMeses));

    // Calcular el total pagado
    totalPagado = cuota * plazoMeses;

    // Calcular la amortización mensual y los intereses
    amortizacion = capital;
    interes = cuota * plazoMeses - capital;

    // Mostrar los resultados
    printf("\nCuota mensual: %.2f\n", cuota);
    printf("Total pagado: %.2f\n", totalPagado);
    printf("Amortización: %.2f\n", amortizacion);
    printf("Intereses: %.2f\n", interes);

    return 0;
}
