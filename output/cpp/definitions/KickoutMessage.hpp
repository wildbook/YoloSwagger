#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct KickoutMessage_t {
    std::string_t message;
  };

  inline void to_json(nlohmann::json& j, const KickoutMessage_t& v) {
    j["message"] = v.message;
  }

  inline void from_json(const nlohmann::json& j, KickoutMessage_t& v) {
    v.message = j.at("message").get<std::string_t>();
  }
  inline std::string to_string(const KickoutMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
