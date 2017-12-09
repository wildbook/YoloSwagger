#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatSanitizerStatus_t {
    std::string platformID;
    bool ready;
    std::string locale;
  };

  inline void to_json(nlohmann::json& j, const LolChatSanitizerStatus_t& v) {
    j["platformID"] = v.platformID;
    j["ready"] = v.ready;
    j["locale"] = v.locale;
  }

  inline void from_json(const nlohmann::json& j, LolChatSanitizerStatus_t& v) {
    v.platformID = j.at("platformID").get<std::string>();
    v.ready = j.at("ready").get<bool>();
    v.locale = j.at("locale").get<std::string>();
  }
  inline std::string to_string(const LolChatSanitizerStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
