using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyLobbyParticipantDto
    {
        [DataMember(Name = "autoFillEligible")]
        bool AutoFillEligible { get; set; }

        [DataMember(Name = "botChampionId")]
        int BotChampionId { get; set; }

        [DataMember(Name = "allowedKickOthers")]
        bool AllowedKickOthers { get; set; }

        [DataMember(Name = "isBot")]
        bool IsBot { get; set; }

        [DataMember(Name = "puuid")]
        string Puuid { get; set; }

        [DataMember(Name = "firstPositionPreference")]
        string FirstPositionPreference { get; set; }

        [DataMember(Name = "ready")]
        bool Ready { get; set; }

        [DataMember(Name = "autoFillProtectedForPromos")]
        bool AutoFillProtectedForPromos { get; set; }

        [DataMember(Name = "botId")]
        string BotId { get; set; }

        [DataMember(Name = "allowedToggleInvite")]
        bool AllowedToggleInvite { get; set; }

        [DataMember(Name = "autoFillProtectedForSoloing")]
        bool AutoFillProtectedForSoloing { get; set; }

        [DataMember(Name = "summonerIconId")]
        int SummonerIconId { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "allowedChangeActivity")]
        bool AllowedChangeActivity { get; set; }

        [DataMember(Name = "summonerName")]
        string SummonerName { get; set; }

        [DataMember(Name = "isSpectator")]
        bool IsSpectator { get; set; }

        [DataMember(Name = "autoFillProtectedForStreaking")]
        bool AutoFillProtectedForStreaking { get; set; }

        [DataMember(Name = "allowedInviteOthers")]
        bool AllowedInviteOthers { get; set; }

        [DataMember(Name = "teamId")]
        int TeamId { get; set; }

        [DataMember(Name = "allowedStartActivity")]
        bool AllowedStartActivity { get; set; }

        [DataMember(Name = "showGhostedBanner")]
        bool ShowGhostedBanner { get; set; }

        [DataMember(Name = "botDifficulty")]
        LolLobbyLobbyBotDifficulty BotDifficulty { get; set; }

        [DataMember(Name = "isLeader")]
        bool IsLeader { get; set; }

        [DataMember(Name = "secondPositionPreference")]
        string SecondPositionPreference { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyParticipantDto {\n");
            sb.Append("  AutoFillEligible: ").Append(AutoFillEligible).Append("\n");
            sb.Append("  BotChampionId: ").Append(BotChampionId).Append("\n");
            sb.Append("  AllowedKickOthers: ").Append(AllowedKickOthers).Append("\n");
            sb.Append("  IsBot: ").Append(IsBot).Append("\n");
            sb.Append("  Puuid: ").Append(Puuid).Append("\n");
            sb.Append("  FirstPositionPreference: ").Append(FirstPositionPreference).Append("\n");
            sb.Append("  Ready: ").Append(Ready).Append("\n");
            sb.Append("  AutoFillProtectedForPromos: ").Append(AutoFillProtectedForPromos).Append("\n");
            sb.Append("  BotId: ").Append(BotId).Append("\n");
            sb.Append("  AllowedToggleInvite: ").Append(AllowedToggleInvite).Append("\n");
            sb.Append("  AutoFillProtectedForSoloing: ").Append(AutoFillProtectedForSoloing).Append("\n");
            sb.Append("  SummonerIconId: ").Append(SummonerIconId).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  AllowedChangeActivity: ").Append(AllowedChangeActivity).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("  IsSpectator: ").Append(IsSpectator).Append("\n");
            sb.Append("  AutoFillProtectedForStreaking: ").Append(AutoFillProtectedForStreaking).Append("\n");
            sb.Append("  AllowedInviteOthers: ").Append(AllowedInviteOthers).Append("\n");
            sb.Append("  TeamId: ").Append(TeamId).Append("\n");
            sb.Append("  AllowedStartActivity: ").Append(AllowedStartActivity).Append("\n");
            sb.Append("  ShowGhostedBanner: ").Append(ShowGhostedBanner).Append("\n");
            sb.Append("  BotDifficulty: ").Append(BotDifficulty).Append("\n");
            sb.Append("  IsLeader: ").Append(IsLeader).Append("\n");
            sb.Append("  SecondPositionPreference: ").Append(SecondPositionPreference).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}