#pragma once
#include <json.hpp>
#include <optional>
#include "LolEsportStreamNotificationsESportsStreams.hpp"
namespace leagueapi {
  struct LolEsportStreamNotificationsESportsLiveStreams_t {
    std::vector<LolEsportStreamNotificationsESportsStreams_t> liveStreams;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsLiveStreams_t& v) {
    j["liveStreams"] = v.liveStreams;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsLiveStreams_t& v) {
    v.liveStreams = j.at("liveStreams").get<std::vector<LolEsportStreamNotificationsESportsStreams_t>>();
  }
}
