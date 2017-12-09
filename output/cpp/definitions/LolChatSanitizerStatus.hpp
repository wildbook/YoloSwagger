#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatSanitizerStatus_t {
    bool ready;
    std::string locale;
    std::string platformID;
  };

  inline void to_json(nlohmann::json& j, const LolChatSanitizerStatus_t& v) {
    j["ready"] = v.ready;
    j["locale"] = v.locale;
    j["platformID"] = v.platformID;
  }

  inline void from_json(const nlohmann::json& j, LolChatSanitizerStatus_t& v) {
    v.ready = j.at("ready").get<bool>();
    v.locale = j.at("locale").get<std::string>();
    v.platformID = j.at("platformID").get<std::string>();
  }
  inline std::string to_string(const LolChatSanitizerStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
