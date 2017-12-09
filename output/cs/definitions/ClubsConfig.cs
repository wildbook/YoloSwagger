using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ClubsConfig
    {
        [DataMember(Name = "clubDescriptionMaxLength")]
        public int ClubDescriptionMaxLength { get; set; }

        [DataMember(Name = "clubMotdMaxLength")]
        public int ClubMotdMaxLength { get; set; }

        [DataMember(Name = "clubNominationsEnabled")]
        public bool ClubNominationsEnabled { get; set; }

        [DataMember(Name = "clubNominationsMaxPending")]
        public int ClubNominationsMaxPending { get; set; }

        [DataMember(Name = "clubTagRequirementMinGames")]
        public int ClubTagRequirementMinGames { get; set; }

        [DataMember(Name = "clubTagRequirementMinMembers")]
        public int ClubTagRequirementMinMembers { get; set; }

        [DataMember(Name = "clubTagRequirementsMinMemberLevel")]
        public int ClubTagRequirementsMinMemberLevel { get; set; }

        [DataMember(Name = "maxActiveClubs")]
        public int MaxActiveClubs { get; set; }

        [DataMember(Name = "maxClubNameLength")]
        public int MaxClubNameLength { get; set; }

        [DataMember(Name = "maxClubTagLength")]
        public int MaxClubTagLength { get; set; }

        [DataMember(Name = "minClubNameLength")]
        public int MinClubNameLength { get; set; }

        [DataMember(Name = "minClubTagLength")]
        public int MinClubTagLength { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClubsConfig {\n");
            sb.Append("  ClubDescriptionMaxLength: ").Append(ClubDescriptionMaxLength).Append("\n");
            sb.Append("  ClubMotdMaxLength: ").Append(ClubMotdMaxLength).Append("\n");
            sb.Append("  ClubNominationsEnabled: ").Append(ClubNominationsEnabled).Append("\n");
            sb.Append("  ClubNominationsMaxPending: ").Append(ClubNominationsMaxPending).Append("\n");
            sb.Append("  ClubTagRequirementMinGames: ").Append(ClubTagRequirementMinGames).Append("\n");
            sb.Append("  ClubTagRequirementMinMembers: ").Append(ClubTagRequirementMinMembers).Append("\n");
            sb.Append("  ClubTagRequirementsMinMemberLevel: ").Append(ClubTagRequirementsMinMemberLevel).Append("\n");
            sb.Append("  MaxActiveClubs: ").Append(MaxActiveClubs).Append("\n");
            sb.Append("  MaxClubNameLength: ").Append(MaxClubNameLength).Append("\n");
            sb.Append("  MaxClubTagLength: ").Append(MaxClubTagLength).Append("\n");
            sb.Append("  MinClubNameLength: ").Append(MinClubNameLength).Append("\n");
            sb.Append("  MinClubTagLength: ").Append(MinClubTagLength).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}