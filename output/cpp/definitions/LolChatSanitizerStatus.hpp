#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatSanitizerStatus_t {
    std::string locale;
    bool ready;
    std::string platformID;
  };

  inline void to_json(nlohmann::json& j, const LolChatSanitizerStatus_t& v) {
    j["locale"] = v.locale;
    j["ready"] = v.ready;
    j["platformID"] = v.platformID;
  }

  inline void from_json(const nlohmann::json& j, LolChatSanitizerStatus_t& v) {
    v.locale = j.at("locale").get<std::string>();
    v.ready = j.at("ready").get<bool>();
    v.platformID = j.at("platformID").get<std::string>();
  }
}
