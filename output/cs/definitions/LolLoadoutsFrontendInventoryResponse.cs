using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLoadoutsFrontendInventoryResponse
    {
        [DataMember(Name = "entitlements")]
        public LolLoadoutsItemKey[] Entitlements { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLoadoutsFrontendInventoryResponse {\n");
            sb.Append("  Entitlements: ").Append(Entitlements).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}