#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashChangeNameRequest_t {
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const LolClashChangeNameRequest_t& v) {
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolClashChangeNameRequest_t& v) {
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolClashChangeNameRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
