using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct ClubsConfig
    {
        [DataMember(Name = "clubTagRequirementsMinMemberLevel")]
        int ClubTagRequirementsMinMemberLevel { get; set; }

        [DataMember(Name = "maxClubTagLength")]
        int MaxClubTagLength { get; set; }

        [DataMember(Name = "maxClubNameLength")]
        int MaxClubNameLength { get; set; }

        [DataMember(Name = "maxActiveClubs")]
        int MaxActiveClubs { get; set; }

        [DataMember(Name = "minClubNameLength")]
        int MinClubNameLength { get; set; }

        [DataMember(Name = "clubDescriptionMaxLength")]
        int ClubDescriptionMaxLength { get; set; }

        [DataMember(Name = "clubTagRequirementMinGames")]
        int ClubTagRequirementMinGames { get; set; }

        [DataMember(Name = "clubTagRequirementMinMembers")]
        int ClubTagRequirementMinMembers { get; set; }

        [DataMember(Name = "clubNominationsEnabled")]
        bool ClubNominationsEnabled { get; set; }

        [DataMember(Name = "clubMotdMaxLength")]
        int ClubMotdMaxLength { get; set; }

        [DataMember(Name = "minClubTagLength")]
        int MinClubTagLength { get; set; }

        [DataMember(Name = "clubNominationsMaxPending")]
        int ClubNominationsMaxPending { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClubsConfig {\n");
            sb.Append("  ClubTagRequirementsMinMemberLevel: ").Append(ClubTagRequirementsMinMemberLevel).Append("\n");
            sb.Append("  MaxClubTagLength: ").Append(MaxClubTagLength).Append("\n");
            sb.Append("  MaxClubNameLength: ").Append(MaxClubNameLength).Append("\n");
            sb.Append("  MaxActiveClubs: ").Append(MaxActiveClubs).Append("\n");
            sb.Append("  MinClubNameLength: ").Append(MinClubNameLength).Append("\n");
            sb.Append("  ClubDescriptionMaxLength: ").Append(ClubDescriptionMaxLength).Append("\n");
            sb.Append("  ClubTagRequirementMinGames: ").Append(ClubTagRequirementMinGames).Append("\n");
            sb.Append("  ClubTagRequirementMinMembers: ").Append(ClubTagRequirementMinMembers).Append("\n");
            sb.Append("  ClubNominationsEnabled: ").Append(ClubNominationsEnabled).Append("\n");
            sb.Append("  ClubMotdMaxLength: ").Append(ClubMotdMaxLength).Append("\n");
            sb.Append("  MinClubTagLength: ").Append(MinClubTagLength).Append("\n");
            sb.Append("  ClubNominationsMaxPending: ").Append(ClubNominationsMaxPending).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}