/*
 * Copyright (c) 2018, NXP Semiconductor
 * All rights reserved.
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

/*
 * PEM-encoded client certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----"
 * "...base64 data..."
 * "-----END CERTIFICATE-----";
 */
static const char clientcredentialCLIENT_CERTIFICATE_PEM[] = //{0};
"-----BEGIN CERTIFICATE-----\n"
"MIIDWTCCAkGgAwIBAgIUCx4AR5XyqGshPkRs1HX8QzyJUMUwDQYJKoZIhvcNAQEL\n"
"BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n"
"SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTE5MDQwNzE4Mzc1\n"
"MVoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n"
"ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALmgYYIZZhgNESoZWNCF\n"
"+fBDcTEYaUfqsvuUKn85wkpIVk385gU8b8ud1CX+Oc0oBX+emwWNipSM15t2Z8w0\n"
"afh8dLIgFtjmBuNOX/zcDqH9BcbHMtn62R0+IfM2ewVWLj58Su47z2swoy1lF/Ol\n"
"D0XWwimLQfM22pZQNj42kn8ENEdLS/vKGEpkogAJVEzi9oX0Jta7lYJrA4EFmAuj\n"
"TxzfvDYn9qfiQd4H+UiZny5fGtHhTtYa0B0bR+FMpNb6xKt+4pAV4pIJuPWxuzG/\n"
"Tz/GxmRHGX5RWB1TOaTak3YxemDgNLm7yOE5yFaHn0RNNBTTHG/GoeIRz/MSiE7t\n"
"bh8CAwEAAaNgMF4wHwYDVR0jBBgwFoAUcin8vPpGTLNLCLxMIcsWXbAPxb0wHQYD\n"
"VR0OBBYEFGWTUYHy7BEQOqRv8sllKYIIdZheMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n"
"AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQBT+viyh2SBAfVf/UCaTV6k48n6\n"
"uogJG97psDfi5A82qp07gcllsh05EV+5z5gShyXAAE51+7e8rtM5LwjJcwMjdNRr\n"
"2idbhisn2PGeNtS0wgJHXEHpa0US+BgsoNI2OIZ5q7M4JgPxX+5nN+Dd7d2jg2Ic\n"
"9X6gX6QpjOZf+2QCEuICEtyD+B+z4XLgu8a+wnAhfrFVnA+ubyGnBdYhFEapEqrY\n"
"jZUzf647Qo10bpR/OCBgRewCNhORDZnv3yS0IPktnpDR4xO0adVuXBMo6hONSr0e\n"
"9vimUlimiNHCQ91obZP2pn3yO7cr/yHjjEjF+WNfYJ4UJblkEU4mPT65dd8m\n"
"-----END CERTIFICATE-----\n";


/*
 * PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 * This is required if you're using JITR, since the issuer (Certificate
 * Authority) of the client certificate is used by the server for routing the
 * device's initial request. (The device client certificate must always be
 * sent as well.) For more information about JITR, see:
 *  https://docs.aws.amazon.com/iot/latest/developerguide/jit-provisioning.html,
 *  https://aws.amazon.com/blogs/iot/just-in-time-registration-of-device-certificates-on-aws-iot/.
 *
 * If you're not using JITR, set the below pointer to NULL.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----"
 * "...base64 data..."
 * "-----END CERTIFICATE-----";
 */
static const char clientcredentialJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM[] = {0};

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----"
 * "...base64 data..."
 * "-----END RSA PRIVATE KEY-----";
 */
static const char clientcredentialCLIENT_PRIVATE_KEY_PEM[] = //{0};
"-----BEGIN RSA PRIVATE KEY-----\n"
"MIIEogIBAAKCAQEAuaBhghlmGA0RKhlY0IX58ENxMRhpR+qy+5QqfznCSkhWTfzm\n"
"BTxvy53UJf45zSgFf56bBY2KlIzXm3ZnzDRp+Hx0siAW2OYG405f/NwOof0Fxscy\n"
"2frZHT4h8zZ7BVYuPnxK7jvPazCjLWUX86UPRdbCKYtB8zballA2PjaSfwQ0R0tL\n"
"+8oYSmSiAAlUTOL2hfQm1ruVgmsDgQWYC6NPHN+8Nif2p+JB3gf5SJmfLl8a0eFO\n"
"1hrQHRtH4Uyk1vrEq37ikBXikgm49bG7Mb9PP8bGZEcZflFYHVM5pNqTdjF6YOA0\n"
"ubvI4TnIVoefRE00FNMcb8ah4hHP8xKITu1uHwIDAQABAoIBAHeJzMFXUePTJmaS\n"
"BBvk61vKUq5nJgVmIvTYKbXcoD3t74Yxgn+EuAnMDb6ZxOdVCpVwsiwVRlT7ji1T\n"
"Ruy+JDAdFZlQCOaM24quAip4HAQ9SOcFiL3PSNoIFRzmzLpXEViz+h0I7z38CFlH\n"
"bPE+LmOvNUJDp6jUflemOAhAZH7eP4RsJoQ3QqVv+Js4h16xVHBv+auLvQkNNA+z\n"
"LbTWi+CuXumgktAJOH26Np8njOjMLIv9hmfRszNAagTk2E06sFNCqBDMiVQONoGu\n"
"SI3JMTbf6I/BoXgOdjUqVKd0Uk972d6FZ8f3a5GIbLdtJ4MR9NlGxIp/o7XqVRIE\n"
"Md3/SUECgYEA9UPSXawNwNrPqh+OzAsmC/apK/DLEzXOX8TLYi/s6fEHPoHE1BJH\n"
"1L77V+sFUSFKhP/VKN1lnyUPTfprrNwJ6tpDuU6DLaJUUcc76jxazlw9kzRr+lCi\n"
"bgYn5lBrKCxtVw6QAwMcVO0VtvYRu3ubezKmE2CtwTz6EVUyP+9WemcCgYEAwcBQ\n"
"av9RJ3Bwgz/AwhrQ0TflCbnSFFu9DGBlahi7jxQN31CrREIEQjsCH06YhrpDjOo5\n"
"psB9Ub4b3F2hGdbFSgW35uAnLx8rhkmU4jvE7l0QIWd0JEmotq3jbELvhH+qaS9U\n"
"jC6iDUprp5cvzNRnhrATLyT1BwtAleaul7NQi4kCgYAA9jgf9+nB5NnFoAQOVsja\n"
"aSg2rOYO+DoL9BicFPYH4NMXcqjT8BJqCimwKZLGw6uoI9yxIVUhr6KEusOrVN2R\n"
"FzQGyQEIr8dG3tIkVAJDJudy6VS3EZPhfJKxe4VADhSLr9nuuRdmWduo8QQWySBN\n"
"9l/iWZG03UlZwgzFZWngZwKBgBSfo++/vaO1FETkRGBk+lVK3dZrMTF5kmX+3Myu\n"
"VUilmdRrgc+CN3HVViR++T1eFlKpm/lkA/LviYerb7qQYe+/LBQnSAR8DOX+bxql\n"
"whCdV1o26OXz8UGAwPSFK3mvHTSVFSrWy+keQtdUAIKNGXf8xg3+oRZe3EEYjP0Y\n"
"2ToBAoGAY+kjgRjcwnKhw/t5dHjKZAbf2ek2u2I1IMjjEk2LxUaoNqLII9UVApfH\n"
"zPoe9YfP2wUIEABqSCEdOkDRUPFLqv5oT/1RLSIwvrM16O31EI28v8QAbWVFGFtl\n"
"q4qv4FFPpfxZZWsuA+TVKIEYE4/V/0omY3u+hi3K57y5+CY759c=\n"
"-----END RSA PRIVATE KEY-----\n";






