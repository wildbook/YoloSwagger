using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMissionsEntitlementsToken
    {
        [DataMember(Name = "entitlements")]
        public string[] Entitlements { get; set; }

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