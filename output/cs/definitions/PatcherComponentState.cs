using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PatcherComponentState
    {
        [DataMember(Name = "action")]
        PatcherComponentStateAction Action { get; set; }

        [DataMember(Name = "id")]
        string Id { get; set; }

        [DataMember(Name = "isCorrupted")]
        bool IsCorrupted { get; set; }

        [DataMember(Name = "isUpToDate")]
        bool IsUpToDate { get; set; }

        [DataMember(Name = "isUpdateAvailable")]
        bool IsUpdateAvailable { get; set; }

        [DataMember(Name = "progress")]
        PatcherComponentActionProgress? Progress { get; set; }

        [DataMember(Name = "timeOfLastUpToDateCheckISO8601")]
        string TimeOfLastUpToDateCheckISO8601 { get; set; }

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