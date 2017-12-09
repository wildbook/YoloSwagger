using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PatcherProductState
    {
        [DataMember(Name = "action")]
        public PatcherComponentStateAction Action { get; set; }

        [DataMember(Name = "components")]
        public PatcherComponentState[] Components { get; set; }

        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "isCorrupted")]
        public bool IsCorrupted { get; set; }

        [DataMember(Name = "isStopped")]
        public bool IsStopped { get; set; }

        [DataMember(Name = "isUpToDate")]
        public bool IsUpToDate { get; set; }

        [DataMember(Name = "isUpdateAvailable")]
        public bool IsUpdateAvailable { get; set; }

        [DataMember(Name = "percentPatched")]
        public double PercentPatched { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PatcherProductState {\n");
            sb.Append("  Action: ").Append(Action).Append("\n");
            sb.Append("  Components: ").Append(Components).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsCorrupted: ").Append(IsCorrupted).Append("\n");
            sb.Append("  IsStopped: ").Append(IsStopped).Append("\n");
            sb.Append("  IsUpToDate: ").Append(IsUpToDate).Append("\n");
            sb.Append("  IsUpdateAvailable: ").Append(IsUpdateAvailable).Append("\n");
            sb.Append("  PercentPatched: ").Append(PercentPatched).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}