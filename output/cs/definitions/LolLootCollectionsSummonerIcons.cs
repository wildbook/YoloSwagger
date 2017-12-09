using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootCollectionsSummonerIcons
    {
        [DataMember(Name = "icons")]
        public int[] Icons { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootCollectionsSummonerIcons {\n");
            sb.Append("  Icons: ").Append(Icons).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}