using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashRoster
    {
        [DataMember(Name = "numCompletedPeriods")]
        int NumCompletedPeriods { get; set; }

        [DataMember(Name = "withdraw")]
        RosterWithdraw Withdraw { get; set; }

        [DataMember(Name = "isActiveInCurrentPhase")]
        bool IsActiveInCurrentPhase { get; set; }

        [DataMember(Name = "availableIcons")]
        RewardIcon[] AvailableIcons { get; set; }

        [DataMember(Name = "shortName")]
        string ShortName { get; set; }

        [DataMember(Name = "wins")]
        int Wins { get; set; }

        [DataMember(Name = "iconId")]
        int IconId { get; set; }

        [DataMember(Name = "losses")]
        int Losses { get; set; }

        [DataMember(Name = "suggestedInvites")]
        LolClashSuggestedInvite[] SuggestedInvites { get; set; }

        [DataMember(Name = "tournamentId")]
        long TournamentId { get; set; }

        [DataMember(Name = "id")]
        string Id { get; set; }

        [DataMember(Name = "isCurrentBracketComplete")]
        bool IsCurrentBracketComplete { get; set; }

        [DataMember(Name = "tier")]
        int Tier { get; set; }

        [DataMember(Name = "currentBracketWins")]
        int CurrentBracketWins { get; set; }

        [DataMember(Name = "isRegistered")]
        bool IsRegistered { get; set; }

        [DataMember(Name = "members")]
        LolClashRosterMember[] Members { get; set; }

        [DataMember(Name = "iconColorId")]
        int IconColorId { get; set; }

        [DataMember(Name = "captainSummonerId")]
        ulong CaptainSummonerId { get; set; }

        [DataMember(Name = "phaseInfos")]
        LolClashRosterPhaseInfo[] PhaseInfos { get; set; }

        [DataMember(Name = "eliminated")]
        bool Eliminated { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashRoster {\n");
            sb.Append("  NumCompletedPeriods: ").Append(NumCompletedPeriods).Append("\n");
            sb.Append("  Withdraw: ").Append(Withdraw).Append("\n");
            sb.Append("  IsActiveInCurrentPhase: ").Append(IsActiveInCurrentPhase).Append("\n");
            sb.Append("  AvailableIcons: ").Append(AvailableIcons).Append("\n");
            sb.Append("  ShortName: ").Append(ShortName).Append("\n");
            sb.Append("  Wins: ").Append(Wins).Append("\n");
            sb.Append("  IconId: ").Append(IconId).Append("\n");
            sb.Append("  Losses: ").Append(Losses).Append("\n");
            sb.Append("  SuggestedInvites: ").Append(SuggestedInvites).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsCurrentBracketComplete: ").Append(IsCurrentBracketComplete).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("  CurrentBracketWins: ").Append(CurrentBracketWins).Append("\n");
            sb.Append("  IsRegistered: ").Append(IsRegistered).Append("\n");
            sb.Append("  Members: ").Append(Members).Append("\n");
            sb.Append("  IconColorId: ").Append(IconColorId).Append("\n");
            sb.Append("  CaptainSummonerId: ").Append(CaptainSummonerId).Append("\n");
            sb.Append("  PhaseInfos: ").Append(PhaseInfos).Append("\n");
            sb.Append("  Eliminated: ").Append(Eliminated).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}