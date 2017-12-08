#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SanitizerContainsSanitizedResponse_t {
    bool contains;
  };

  inline void to_json(nlohmann::json& j, const SanitizerContainsSanitizedResponse_t& v) {
    j["contains"] = v.contains;
  }

  inline void from_json(const nlohmann::json& j, SanitizerContainsSanitizedResponse_t& v) {
    v.contains = j.at("contains").get<bool>();
  }
  inline std::string to_string(const SanitizerContainsSanitizedResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
