using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PatcherComponentStateProgress
    {
        [DataMember(Name = "bytesComplete")]
        public ulong BytesComplete { get; set; }

        [DataMember(Name = "bytesPerSecond")]
        public double BytesPerSecond { get; set; }

        [DataMember(Name = "bytesRequired")]
        public ulong BytesRequired { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PatcherComponentStateProgress {\n");
            sb.Append("  BytesComplete: ").Append(BytesComplete).Append("\n");
            sb.Append("  BytesPerSecond: ").Append(BytesPerSecond).Append("\n");
            sb.Append("  BytesRequired: ").Append(BytesRequired).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}