using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLicenseAgreementLicenseAgreement
    {
        [DataMember(Name = "text")]
        string Text { get; set; }

        [DataMember(Name = "licenseType")]
        LolLicenseAgreementLicenseAgreementType LicenseType { get; set; }

        [DataMember(Name = "id")]
        string Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLicenseAgreementLicenseAgreement {\n");
            sb.Append("  Text: ").Append(Text).Append("\n");
            sb.Append("  LicenseType: ").Append(LicenseType).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}