using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PlayerPreferences
    {
        [DataMember(Name = "data")]
        public string Data { get; set; }

        [DataMember(Name = "hash")]
        public string Hash { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        [DataMember(Name = "version")]
        public string Version { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerPreferences {\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("  Hash: ").Append(Hash).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Version: ").Append(Version).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}