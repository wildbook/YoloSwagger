using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PatcherStatus
    {
        [DataMember(Name = "willRestartOnSelfUpdate")]
        bool WillRestartOnSelfUpdate { get; set; }

        [DataMember(Name = "hasUpdatesOnRestart")]
        bool HasUpdatesOnRestart { get; set; }

        [DataMember(Name = "successfullyInstalledVersion")]
        uint? SuccessfullyInstalledVersion { get; set; }

        [DataMember(Name = "connectedToPatchServer")]
        bool ConnectedToPatchServer { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PatcherStatus {\n");
            sb.Append("  WillRestartOnSelfUpdate: ").Append(WillRestartOnSelfUpdate).Append("\n");
            sb.Append("  HasUpdatesOnRestart: ").Append(HasUpdatesOnRestart).Append("\n");
            sb.Append("  SuccessfullyInstalledVersion: ").Append(SuccessfullyInstalledVersion).Append("\n");
            sb.Append("  ConnectedToPatchServer: ").Append(ConnectedToPatchServer).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}