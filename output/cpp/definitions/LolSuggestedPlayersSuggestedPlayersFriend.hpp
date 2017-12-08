#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersFriend_t {
    std::string availability;
    uint64_t id;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersFriend_t& v) {
    j["availability"] = v.availability;
    j["id"] = v.id;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersFriend_t& v) {
    v.availability = j.at("availability").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersFriend_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
