using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolCollectionsAcsChampionGamesCollection
    {
        [DataMember(Name = "champions")]
        public LolCollectionsAcsChampionGames[] Champions { get; set; }

        [DataMember(Name = "gameCount")]
        public uint GameCount { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsAcsChampionGamesCollection {\n");
            sb.Append("  Champions: ").Append(Champions).Append("\n");
            sb.Append("  GameCount: ").Append(GameCount).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}