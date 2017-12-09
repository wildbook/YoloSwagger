using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    // Represents generic data for an asynchronous event.
    [DataContract]
    public struct BindingGenericAsyncEvent
    {
        // Asynchronous operation token
        [DataMember(Name = "asyncToken")]
        public uint AsyncToken { get; set; }

        // Event data
        [DataMember(Name = "data")]
        public dynamic Data { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BindingGenericAsyncEvent {\n");
            sb.Append("  AsyncToken: ").Append(AsyncToken).Append("\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}