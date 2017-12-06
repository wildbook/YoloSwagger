#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SeriesAlertDTO_t {
    std::string title;
    std::string description;
    int64_t alertTime;
  };

  inline void to_json(nlohmann::json& j, const SeriesAlertDTO_t& v) {
    j["title"] = v.title;
    j["description"] = v.description;
    j["alertTime"] = v.alertTime;
  }

  inline void from_json(const nlohmann::json& j, SeriesAlertDTO_t& v) {
    v.title = j.at("title").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.alertTime = j.at("alertTime").get<int64_t>();
  }
}
