#pragma once
#include <json.hpp>
#include <optional>
#include "MetricMetadataNotify.hpp"
namespace leagueapi {
  struct MetricMetadataAlert_t {
    double min;
    double max;
    MetricMetadataNotify_t notify;
    std::string pretty_name;
    std::string description;
    std::string level;
    std::string info;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadataAlert_t& v) {
    j["min"] = v.min;
    j["max"] = v.max;
    j["notify"] = v.notify;
    j["pretty_name"] = v.pretty_name;
    j["description"] = v.description;
    j["level"] = v.level;
    j["info"] = v.info;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadataAlert_t& v) {
    v.min = j.at("min").get<double>();
    v.max = j.at("max").get<double>();
    v.notify = j.at("notify").get<MetricMetadataNotify_t>();
    v.pretty_name = j.at("pretty_name").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.level = j.at("level").get<std::string>();
    v.info = j.at("info").get<std::string>();
  }
}
