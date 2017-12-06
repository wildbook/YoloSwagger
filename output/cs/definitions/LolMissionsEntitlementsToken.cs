using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMissionsEntitlementsToken
    {
        [DataMember(Name = "entitlements")]
        string[] Entitlements { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMissionsEntitlementsToken {\n");
            sb.Append("  Entitlements: ").Append(Entitlements).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}