using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashBracket
    {
        [DataMember(Name = "currentLoserRound")]
        public int CurrentLoserRound { get; set; }

        [DataMember(Name = "currentRound")]
        public int CurrentRound { get; set; }

        [DataMember(Name = "id")]
        public long Id { get; set; }

        [DataMember(Name = "isComplete")]
        public bool IsComplete { get; set; }

        [DataMember(Name = "loserBracketMatches")]
        public BracketMatch[] LoserBracketMatches { get; set; }

        [DataMember(Name = "matches")]
        public BracketMatch[] Matches { get; set; }

        [DataMember(Name = "period")]
        public int Period { get; set; }

        [DataMember(Name = "rosters")]
        public BracketRoster[] Rosters { get; set; }

        [DataMember(Name = "size")]
        public int Size { get; set; }

        [DataMember(Name = "tournamentId")]
        public long TournamentId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashBracket {\n");
            sb.Append("  CurrentLoserRound: ").Append(CurrentLoserRound).Append("\n");
            sb.Append("  CurrentRound: ").Append(CurrentRound).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsComplete: ").Append(IsComplete).Append("\n");
            sb.Append("  LoserBracketMatches: ").Append(LoserBracketMatches).Append("\n");
            sb.Append("  Matches: ").Append(Matches).Append("\n");
            sb.Append("  Period: ").Append(Period).Append("\n");
            sb.Append("  Rosters: ").Append(Rosters).Append("\n");
            sb.Append("  Size: ").Append(Size).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}