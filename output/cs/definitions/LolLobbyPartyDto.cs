using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyPartyDto
    {
        [DataMember(Name = "activeRestrictions")]
        public LolLobbyQueueRestrictionDto ActiveRestrictions { get; set; }

        [DataMember(Name = "activityLocked")]
        public bool ActivityLocked { get; set; }

        [DataMember(Name = "activityResumeUtcMillis")]
        public ulong ActivityResumeUtcMillis { get; set; }

        [DataMember(Name = "activityStartedUtcMillis")]
        public ulong ActivityStartedUtcMillis { get; set; }

        [DataMember(Name = "chat")]
        public LolLobbyPartyChatDto Chat { get; set; }

        [DataMember(Name = "eligibilityHash")]
        public long EligibilityHash { get; set; }

        [DataMember(Name = "gameMode")]
        public LolLobbyGameModeDto GameMode { get; set; }

        [DataMember(Name = "maxPartySize")]
        public int MaxPartySize { get; set; }

        [DataMember(Name = "partyId")]
        public string PartyId { get; set; }

        [DataMember(Name = "partyType")]
        public string PartyType { get; set; }

        [DataMember(Name = "platformId")]
        public string PlatformId { get; set; }

        [DataMember(Name = "players")]
        public LolLobbyPartyMemberDto[] Players { get; set; }

        [DataMember(Name = "version")]
        public ulong Version { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyPartyDto {\n");
            sb.Append("  ActiveRestrictions: ").Append(ActiveRestrictions).Append("\n");
            sb.Append("  ActivityLocked: ").Append(ActivityLocked).Append("\n");
            sb.Append("  ActivityResumeUtcMillis: ").Append(ActivityResumeUtcMillis).Append("\n");
            sb.Append("  ActivityStartedUtcMillis: ").Append(ActivityStartedUtcMillis).Append("\n");
            sb.Append("  Chat: ").Append(Chat).Append("\n");
            sb.Append("  EligibilityHash: ").Append(EligibilityHash).Append("\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  MaxPartySize: ").Append(MaxPartySize).Append("\n");
            sb.Append("  PartyId: ").Append(PartyId).Append("\n");
            sb.Append("  PartyType: ").Append(PartyType).Append("\n");
            sb.Append("  PlatformId: ").Append(PlatformId).Append("\n");
            sb.Append("  Players: ").Append(Players).Append("\n");
            sb.Append("  Version: ").Append(Version).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}