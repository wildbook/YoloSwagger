using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PatcherStatus
    {
        [DataMember(Name = "connectedToPatchServer")]
        public bool ConnectedToPatchServer { get; set; }

        [DataMember(Name = "hasUpdatesOnRestart")]
        public bool HasUpdatesOnRestart { get; set; }

        [DataMember(Name = "successfullyInstalledVersion")]
        public uint? SuccessfullyInstalledVersion { get; set; }

        [DataMember(Name = "willRestartOnSelfUpdate")]
        public bool WillRestartOnSelfUpdate { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PatcherStatus {\n");
            sb.Append("  ConnectedToPatchServer: ").Append(ConnectedToPatchServer).Append("\n");
            sb.Append("  HasUpdatesOnRestart: ").Append(HasUpdatesOnRestart).Append("\n");
            sb.Append("  SuccessfullyInstalledVersion: ").Append(SuccessfullyInstalledVersion).Append("\n");
            sb.Append("  WillRestartOnSelfUpdate: ").Append(WillRestartOnSelfUpdate).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}