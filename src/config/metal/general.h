/*
 * Console configuration suitable for use in public cloud
 * environments, or any environment where direct console access is not
 * available.
 *
 */


/* Enable VLAN command: https://ipxe.org/buildcfg/vlan_cmd */
#define VLAN_CMD

/* Enable NTP command: https://ipxe.org/buildcfg/ntp_cmd */
#define NTP_CMD

/* Enable TIME command: https://ipxe.org/buildcfg/time_cmd */
#define TIME_CMD

/* Enable PCI_CMD command: https://ipxe.org/buildcfg/pci_cmd */
#define PCI_CMD

/* Enable REBOOT_CMD command: https://ipxe.org/buildcfg/REBOOT_CMD */
#define REBOOT_CMD

/* Enable NEIGHBOUR command: https://ipxe.org/buildcfg/neighbour_cmd */
#define NEIGHBOUR_CMD

/* Enable CONSOLE command: https://ipxe.org/buildcfg/console_cmd */
#define CONSOLE_CMD

/* Enable IMAGE_TRUST_CMD command: https://ipxe.org/buildcfg/image_trust_cmd
usage: Used for enabling the validation of trusted images.
*/
#define IMAGE_TRUST_CMD

/* Enable NSLOOKUP_CMD command: https://ipxe.org/buildcfg/nslookup_cmd
usage: Used for triaging DNS.
*/
#define NSLOOKUP_CMD

/* Enable PING_CMD command: https://ipxe.org/buildcfg/ping_cmd
usage: Used for triaging TCP/IP routing and general connectivity.
*/
#define PING_CMD

/* Try for less time on metal because of the numerous network interfaces in use */
#undef DHCP_REQ_END_TIMEOUT_SEC
#define DHCP_REQ_END_TIMEOUT_SEC	4

#undef DHCP_DISC_START_TIMEOUT_SEC
#define DHCP_DISC_START_TIMEOUT_SEC	4

#undef DHCP_DISC_END_TIMEOUT_SEC
#define DHCP_DISC_END_TIMEOUT_SEC	32

#undef DHCP_DISC_MAX_DEFERRALS
#define DHCP_DISC_MAX_DEFERRALS		180

#undef LINK_WAIT_TIMEOUT
#define LINK_WAIT_TIMEOUT ( 45 * TICKS_PER_SEC )

/* Work around missing EFI_PXE_BASE_CODE_PROTOCOL */
#ifndef EFI_DOWNGRADE_UX
#define EFI_DOWNGRADE_UX
#endif

/* The Tivoli VMM workaround causes a KVM emulation failure on hosts
 * without unrestricted_guest support
 */
#ifdef TIVOLI_VMM_WORKAROUND
#undef TIVOLI_VMM_WORKAROUND
#endif
