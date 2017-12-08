#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SeriesAlertDTO_t {
    int64_t_t alertTime;
    std::string_t description;
    std::string_t title;
  };

  inline void to_json(nlohmann::json& j, const SeriesAlertDTO_t& v) {
    j["alertTime"] = v.alertTime;
    j["description"] = v.description;
    j["title"] = v.title;
  }

  inline void from_json(const nlohmann::json& j, SeriesAlertDTO_t& v) {
    v.alertTime = j.at("alertTime").get<int64_t_t>();
    v.description = j.at("description").get<std::string_t>();
    v.title = j.at("title").get<std::string_t>();
  }
  inline std::string to_string(const SeriesAlertDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
