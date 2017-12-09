#pragma once
#include <json.hpp>
#include <optional>
#include "MetricMetadataNotify.hpp"
namespace leagueapi {
  struct MetricMetadataAlert_t {
    std::string description;
    double max;
    std::string pretty_name;
    MetricMetadataNotify_t notify;
    double min;
    std::string info;
    std::string level;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadataAlert_t& v) {
    j["description"] = v.description;
    j["max"] = v.max;
    j["pretty_name"] = v.pretty_name;
    j["notify"] = v.notify;
    j["min"] = v.min;
    j["info"] = v.info;
    j["level"] = v.level;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadataAlert_t& v) {
    v.description = j.at("description").get<std::string>();
    v.max = j.at("max").get<double>();
    v.pretty_name = j.at("pretty_name").get<std::string>();
    v.notify = j.at("notify").get<MetricMetadataNotify_t>();
    v.min = j.at("min").get<double>();
    v.info = j.at("info").get<std::string>();
    v.level = j.at("level").get<std::string>();
  }
  inline std::string to_string(const MetricMetadataAlert_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
