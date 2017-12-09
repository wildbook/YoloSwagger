using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChampionsLcdsDynamicClientConfig
    {
        [DataMember(Name = "DisabledChampions")]
        public dynamic DisabledChampions { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampionsLcdsDynamicClientConfig {\n");
            sb.Append("  DisabledChampions: ").Append(DisabledChampions).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}