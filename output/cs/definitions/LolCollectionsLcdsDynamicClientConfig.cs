using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolCollectionsLcdsDynamicClientConfig
    {
        [DataMember(Name = "DisabledChampions")]
        dynamic DisabledChampions { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsLcdsDynamicClientConfig {\n");
            sb.Append("  DisabledChampions: ").Append(DisabledChampions).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}