using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLicenseAgreementLicenseAgreement
    {
        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "licenseType")]
        public LolLicenseAgreementLicenseAgreementType LicenseType { get; set; }

        [DataMember(Name = "text")]
        public string Text { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLicenseAgreementLicenseAgreement {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  LicenseType: ").Append(LicenseType).Append("\n");
            sb.Append("  Text: ").Append(Text).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}