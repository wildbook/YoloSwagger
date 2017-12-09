using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PatcherComponentState
    {
        [DataMember(Name = "action")]
        public PatcherComponentStateAction Action { get; set; }

        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "isCorrupted")]
        public bool IsCorrupted { get; set; }

        [DataMember(Name = "isUpToDate")]
        public bool IsUpToDate { get; set; }

        [DataMember(Name = "isUpdateAvailable")]
        public bool IsUpdateAvailable { get; set; }

        [DataMember(Name = "progress")]
        public PatcherComponentActionProgress? Progress { get; set; }

        [DataMember(Name = "timeOfLastUpToDateCheckISO8601")]
        public string TimeOfLastUpToDateCheckISO8601 { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PatcherComponentState {\n");
            sb.Append("  Action: ").Append(Action).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsCorrupted: ").Append(IsCorrupted).Append("\n");
            sb.Append("  IsUpToDate: ").Append(IsUpToDate).Append("\n");
            sb.Append("  IsUpdateAvailable: ").Append(IsUpdateAvailable).Append("\n");
            sb.Append("  Progress: ").Append(Progress).Append("\n");
            sb.Append("  TimeOfLastUpToDateCheckISO8601: ").Append(TimeOfLastUpToDateCheckISO8601).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}