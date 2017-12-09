using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchHistoryMatchHistoryGameList
    {
        [DataMember(Name = "gameBeginDate")]
        public string GameBeginDate { get; set; }

        [DataMember(Name = "gameCount")]
        public ulong GameCount { get; set; }

        [DataMember(Name = "gameEndDate")]
        public string GameEndDate { get; set; }

        [DataMember(Name = "gameIndexBegin")]
        public ulong GameIndexBegin { get; set; }

        [DataMember(Name = "gameIndexEnd")]
        public ulong GameIndexEnd { get; set; }

        [DataMember(Name = "games")]
        public LolMatchHistoryMatchHistoryGame[] Games { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryGameList {\n");
            sb.Append("  GameBeginDate: ").Append(GameBeginDate).Append("\n");
            sb.Append("  GameCount: ").Append(GameCount).Append("\n");
            sb.Append("  GameEndDate: ").Append(GameEndDate).Append("\n");
            sb.Append("  GameIndexBegin: ").Append(GameIndexBegin).Append("\n");
            sb.Append("  GameIndexEnd: ").Append(GameIndexEnd).Append("\n");
            sb.Append("  Games: ").Append(Games).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}