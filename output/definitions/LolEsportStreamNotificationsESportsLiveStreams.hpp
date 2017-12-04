#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsESportsLiveStreams_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsESportsLiveStreams_HPP
#include <json.hpp>
#include "LolEsportStreamNotificationsESportsStreams.hpp"
namespace test {
  // 
  struct LolEsportStreamNotificationsESportsLiveStreams {
'    // 
    std::vector<LolEsportStreamNotificationsESportsStreams> liveStreams;
  };

  void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsLiveStreams& v) {
    j["liveStreams"] = v.liveStreams;
  }

  void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsLiveStreams& v) {
    v.liveStreams = j.at("liveStreams").get<std::vector<LolEsportStreamNotificationsESportsStreams>>;
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsESportsLiveStreams_HPP
