using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolCollectionsCollectionsSummonerIcons
    {
        [DataMember(Name = "icons")]
        int[] Icons { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsCollectionsSummonerIcons {\n");
            sb.Append("  Icons: ").Append(Icons).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}