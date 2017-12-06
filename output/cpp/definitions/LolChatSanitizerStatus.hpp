#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatSanitizerStatus_t {
    std::string locale;
    std::string platformID;
    bool ready;
  };

  inline void to_json(nlohmann::json& j, const LolChatSanitizerStatus_t& v) {
    j["locale"] = v.locale;
    j["platformID"] = v.platformID;
    j["ready"] = v.ready;
  }

  inline void from_json(const nlohmann::json& j, LolChatSanitizerStatus_t& v) {
    v.locale = j.at("locale").get<std::string>();
    v.platformID = j.at("platformID").get<std::string>();
    v.ready = j.at("ready").get<bool>();
  }
}
