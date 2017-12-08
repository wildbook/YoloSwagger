using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PatcherP2PStatus
    {
        [DataMember(Name = "isAllowedByUser")]
        bool IsAllowedByUser { get; set; }

        [DataMember(Name = "requiresRestart")]
        bool RequiresRestart { get; set; }

        [DataMember(Name = "isEnabledForPatchline")]
        bool IsEnabledForPatchline { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PatcherP2PStatus {\n");
            sb.Append("  IsAllowedByUser: ").Append(IsAllowedByUser).Append("\n");
            sb.Append("  RequiresRestart: ").Append(RequiresRestart).Append("\n");
            sb.Append("  IsEnabledForPatchline: ").Append(IsEnabledForPatchline).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}