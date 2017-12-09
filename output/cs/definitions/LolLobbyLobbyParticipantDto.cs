using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobbyParticipantDto
    {
        [DataMember(Name = "allowedChangeActivity")]
        public bool AllowedChangeActivity { get; set; }

        [DataMember(Name = "allowedInviteOthers")]
        public bool AllowedInviteOthers { get; set; }

        [DataMember(Name = "allowedKickOthers")]
        public bool AllowedKickOthers { get; set; }

        [DataMember(Name = "allowedStartActivity")]
        public bool AllowedStartActivity { get; set; }

        [DataMember(Name = "allowedToggleInvite")]
        public bool AllowedToggleInvite { get; set; }

        [DataMember(Name = "autoFillEligible")]
        public bool AutoFillEligible { get; set; }

        [DataMember(Name = "autoFillProtectedForPromos")]
        public bool AutoFillProtectedForPromos { get; set; }

        [DataMember(Name = "autoFillProtectedForSoloing")]
        public bool AutoFillProtectedForSoloing { get; set; }

        [DataMember(Name = "autoFillProtectedForStreaking")]
        public bool AutoFillProtectedForStreaking { get; set; }

        [DataMember(Name = "botChampionId")]
        public int BotChampionId { get; set; }

        [DataMember(Name = "botDifficulty")]
        public LolLobbyLobbyBotDifficulty BotDifficulty { get; set; }

        [DataMember(Name = "botId")]
        public string BotId { get; set; }

        [DataMember(Name = "firstPositionPreference")]
        public string FirstPositionPreference { get; set; }

        [DataMember(Name = "isBot")]
        public bool IsBot { get; set; }

        [DataMember(Name = "isLeader")]
        public bool IsLeader { get; set; }

        [DataMember(Name = "isSpectator")]
        public bool IsSpectator { get; set; }

        [DataMember(Name = "puuid")]
        public string Puuid { get; set; }

        [DataMember(Name = "ready")]
        public bool Ready { get; set; }

        [DataMember(Name = "secondPositionPreference")]
        public string SecondPositionPreference { get; set; }

        [DataMember(Name = "showGhostedBanner")]
        public bool ShowGhostedBanner { get; set; }

        [DataMember(Name = "summonerIconId")]
        public int SummonerIconId { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        public string SummonerName { get; set; }

        [DataMember(Name = "teamId")]
        public int TeamId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyParticipantDto {\n");
            sb.Append("  AllowedChangeActivity: ").Append(AllowedChangeActivity).Append("\n");
            sb.Append("  AllowedInviteOthers: ").Append(AllowedInviteOthers).Append("\n");
            sb.Append("  AllowedKickOthers: ").Append(AllowedKickOthers).Append("\n");
            sb.Append("  AllowedStartActivity: ").Append(AllowedStartActivity).Append("\n");
            sb.Append("  AllowedToggleInvite: ").Append(AllowedToggleInvite).Append("\n");
            sb.Append("  AutoFillEligible: ").Append(AutoFillEligible).Append("\n");
            sb.Append("  AutoFillProtectedForPromos: ").Append(AutoFillProtectedForPromos).Append("\n");
            sb.Append("  AutoFillProtectedForSoloing: ").Append(AutoFillProtectedForSoloing).Append("\n");
            sb.Append("  AutoFillProtectedForStreaking: ").Append(AutoFillProtectedForStreaking).Append("\n");
            sb.Append("  BotChampionId: ").Append(BotChampionId).Append("\n");
            sb.Append("  BotDifficulty: ").Append(BotDifficulty).Append("\n");
            sb.Append("  BotId: ").Append(BotId).Append("\n");
            sb.Append("  FirstPositionPreference: ").Append(FirstPositionPreference).Append("\n");
            sb.Append("  IsBot: ").Append(IsBot).Append("\n");
            sb.Append("  IsLeader: ").Append(IsLeader).Append("\n");
            sb.Append("  IsSpectator: ").Append(IsSpectator).Append("\n");
            sb.Append("  Puuid: ").Append(Puuid).Append("\n");
            sb.Append("  Ready: ").Append(Ready).Append("\n");
            sb.Append("  SecondPositionPreference: ").Append(SecondPositionPreference).Append("\n");
            sb.Append("  ShowGhostedBanner: ").Append(ShowGhostedBanner).Append("\n");
            sb.Append("  SummonerIconId: ").Append(SummonerIconId).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("  TeamId: ").Append(TeamId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}