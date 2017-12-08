using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolAcsAcsChampionGamesCollection
    {
        [DataMember(Name = "gameCount")]
        uint GameCount { get; set; }

        [DataMember(Name = "champions")]
        LolAcsAcsChampionGames[] Champions { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolAcsAcsChampionGamesCollection {\n");
            sb.Append("  GameCount: ").Append(GameCount).Append("\n");
            sb.Append("  Champions: ").Append(Champions).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}