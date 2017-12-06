using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashBracket
    {
        [DataMember(Name = "currentLoserRound")]
        int CurrentLoserRound { get; set; }

        [DataMember(Name = "currentRound")]
        int CurrentRound { get; set; }

        [DataMember(Name = "id")]
        long Id { get; set; }

        [DataMember(Name = "isComplete")]
        bool IsComplete { get; set; }

        [DataMember(Name = "loserBracketMatches")]
        BracketMatch[] LoserBracketMatches { get; set; }

        [DataMember(Name = "matches")]
        BracketMatch[] Matches { get; set; }

        [DataMember(Name = "period")]
        int Period { get; set; }

        [DataMember(Name = "rosters")]
        BracketRoster[] Rosters { get; set; }

        [DataMember(Name = "size")]
        int Size { get; set; }

        [DataMember(Name = "tournamentId")]
        long TournamentId { get; set; }

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