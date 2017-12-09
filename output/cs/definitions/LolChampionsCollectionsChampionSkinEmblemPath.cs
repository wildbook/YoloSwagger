using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChampionsCollectionsChampionSkinEmblemPath
    {
        [DataMember(Name = "large")]
        public string Large { get; set; }

        [DataMember(Name = "small")]
        public string Small { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampionsCollectionsChampionSkinEmblemPath {\n");
            sb.Append("  Large: ").Append(Large).Append("\n");
            sb.Append("  Small: ").Append(Small).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}