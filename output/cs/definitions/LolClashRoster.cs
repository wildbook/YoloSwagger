using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashRoster
    {
        [DataMember(Name = "availableIcons")]
        public RewardIcon[] AvailableIcons { get; set; }

        [DataMember(Name = "captainSummonerId")]
        public ulong CaptainSummonerId { get; set; }

        [DataMember(Name = "currentBracketWins")]
        public int CurrentBracketWins { get; set; }

        [DataMember(Name = "eliminated")]
        public bool Eliminated { get; set; }

        [DataMember(Name = "iconColorId")]
        public int IconColorId { get; set; }

        [DataMember(Name = "iconId")]
        public int IconId { get; set; }

        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "isActiveInCurrentPhase")]
        public bool IsActiveInCurrentPhase { get; set; }

        [DataMember(Name = "isCurrentBracketComplete")]
        public bool IsCurrentBracketComplete { get; set; }

        [DataMember(Name = "isRegistered")]
        public bool IsRegistered { get; set; }

        [DataMember(Name = "losses")]
        public int Losses { get; set; }

        [DataMember(Name = "members")]
        public LolClashRosterMember[] Members { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "numCompletedPeriods")]
        public int NumCompletedPeriods { get; set; }

        [DataMember(Name = "phaseInfos")]
        public LolClashRosterPhaseInfo[] PhaseInfos { get; set; }

        [DataMember(Name = "shortName")]
        public string ShortName { get; set; }

        [DataMember(Name = "suggestedInvites")]
        public LolClashSuggestedInvite[] SuggestedInvites { get; set; }

        [DataMember(Name = "tier")]
        public int Tier { get; set; }

        [DataMember(Name = "tournamentId")]
        public long TournamentId { get; set; }

        [DataMember(Name = "wins")]
        public int Wins { get; set; }

        [DataMember(Name = "withdraw")]
        public RosterWithdraw Withdraw { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashRoster {\n");
            sb.Append("  AvailableIcons: ").Append(AvailableIcons).Append("\n");
            sb.Append("  CaptainSummonerId: ").Append(CaptainSummonerId).Append("\n");
            sb.Append("  CurrentBracketWins: ").Append(CurrentBracketWins).Append("\n");
            sb.Append("  Eliminated: ").Append(Eliminated).Append("\n");
            sb.Append("  IconColorId: ").Append(IconColorId).Append("\n");
            sb.Append("  IconId: ").Append(IconId).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsActiveInCurrentPhase: ").Append(IsActiveInCurrentPhase).Append("\n");
            sb.Append("  IsCurrentBracketComplete: ").Append(IsCurrentBracketComplete).Append("\n");
            sb.Append("  IsRegistered: ").Append(IsRegistered).Append("\n");
            sb.Append("  Losses: ").Append(Losses).Append("\n");
            sb.Append("  Members: ").Append(Members).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  NumCompletedPeriods: ").Append(NumCompletedPeriods).Append("\n");
            sb.Append("  PhaseInfos: ").Append(PhaseInfos).Append("\n");
            sb.Append("  ShortName: ").Append(ShortName).Append("\n");
            sb.Append("  SuggestedInvites: ").Append(SuggestedInvites).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("  Wins: ").Append(Wins).Append("\n");
            sb.Append("  Withdraw: ").Append(Withdraw).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}