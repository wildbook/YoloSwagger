#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SeriesAlertDTO_t {
    std::string description;
    int64_t alertTime;
    std::string title;
  };

  inline void to_json(nlohmann::json& j, const SeriesAlertDTO_t& v) {
    j["description"] = v.description;
    j["alertTime"] = v.alertTime;
    j["title"] = v.title;
  }

  inline void from_json(const nlohmann::json& j, SeriesAlertDTO_t& v) {
    v.description = j.at("description").get<std::string>();
    v.alertTime = j.at("alertTime").get<int64_t>();
    v.title = j.at("title").get<std::string>();
  }
  inline std::string to_string(const SeriesAlertDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
